<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <title>Burger Menu (inline styles)</title>
</head>
<body style="
  margin:0;
  min-height:100vh;
  /* full-page background image - replace URL with your own if needed */
  background-image: url('https://images.unsplash.com/photo-1550547660-d9450f859349?auto=format&fit=crop&w=1600&q=80');
  background-size:cover;
  background-position:center;
  background-repeat:no-repeat;
  font-family: Arial, Helvetica, sans-serif;
  display:flex;
  align-items:center;
  justify-content:center;
">

  <!-- Menu card panel (centered) -->
  <div style="
    width:360px;
    max-width:90%;
    background: rgba(17,17,17,0.95);
    color:#fff;
    border-radius:14px;
    padding:28px 26px 36px;
    box-shadow: 0 12px 30px rgba(0,0,0,0.45);
    backdrop-filter: blur(2px);
  ">

    <!-- Header -->
    <h1 style="
      margin:0;
      text-align:center;
      color:#ffd400;
      font-size:40px;
      letter-spacing:2px;
      line-height:1;
      font-weight:800;
    ">BURGER</h1>

    <div style="text-align:center; color:#dcdcdc; margin-top:6px; margin-bottom:20px; font-size:18px;">
      Menu
    </div>

    <!-- Burger items list -->
    <ul role="list" aria-label="Burger items" style="list-style:none; padding:0; margin:0;">
      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#cfcfcf; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">CHICKEN BURGER</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 110</span>
      </li>

      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#cfcfcf; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">DOUBLE CHEESE BURGER</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 170</span>
      </li>

      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#cfcfcf; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">CHICKEN CHEESE BURGER</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 140</span>
      </li>

      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#cfcfcf; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">DOUBLE PATTY BURGER</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 210</span>
      </li>

      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#cfcfcf; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">PERI PERI CHICKEN BURGER</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 135</span>
      </li>
    </ul>

    <!-- Yellow COMBOS section bar (full width of the card) -->
    <div style="
      background:#ffd400;
      color:#111;
      text-align:center;
      padding:11px 8px;
      margin:20px -26px 12px; /* negative horizontal margin to reach card edges visually */
      font-weight:800;
      letter-spacing:1px;
      border-bottom-left-radius:10px;
      border-bottom-right-radius:10px;
      border-top-left-radius:3px;
      border-top-right-radius:3px;
      font-size:18px;
    ">COMBOS</div>

    <!-- Combos list -->
    <ul role="list" aria-label="Combos" style="list-style:none; padding:0; margin:0;">
      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#d9d9d9; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">C BURGER FRIES</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 155</span>
      </li>

      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#d9d9d9; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">CHEESE B 184</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 209</span>
      </li>

      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#d9d9d9; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">BIG (B) CHEESE</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 270</span>
      </li>

      <li style="display:flex; justify-content:space-between; align-items:center; padding:10px 0; color:#d9d9d9; text-transform:uppercase; font-weight:600; font-size:13px;">
        <span style="flex:1; overflow:hidden; text-overflow:ellipsis; white-space:nowrap;">BLAST B</span>
        <span style="width:70px; text-align:right; color:#fff;">₹ 450</span>
      </li>
    </ul>

    <!-- bottom spacing to mimic reference layout -->
    <div style="height:36px;"></div>
  </div>

</body>
</html>